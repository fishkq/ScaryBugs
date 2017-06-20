//
//  MasterViewController.h
//  ScaryBugs
//
//  Created by YuKunquan on 6/28/16.
//  Copyright © 2016 YuKunquan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong) NSMutableArray *bugs;

@end

