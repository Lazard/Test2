//
//  LSMasterViewController.h
//  Test2
//
//  Created by Сергей Лазаренко on 28.04.13.
//  Copyright (c) 2013 Сергей Лазаренко. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LSDetailViewController;

#import <CoreData/CoreData.h>

@interface LSMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) LSDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
