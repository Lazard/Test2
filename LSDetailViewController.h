//
//  LSDetailViewController.h
//  Test2
//
//  Created by Сергей Лазаренко on 28.04.13.
//  Copyright (c) 2013 Сергей Лазаренко. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LSDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
