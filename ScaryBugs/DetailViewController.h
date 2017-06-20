//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by YuKunquan on 6/28/16.
//  Copyright © 2016 YuKunquan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RWTRateView.h"

@class RWTScaryBugDoc;

@interface DetailViewController : UIViewController <RWTRateViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (strong, nonatomic) RWTScaryBugDoc *detailItem;
@property (strong, nonatomic) UIImagePickerController *picker;

@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet RWTRateView *rateView;
- (IBAction)addPictureTapped:(id)sender;
- (IBAction)titleFieldTextChanged:(id)sender;

@end

