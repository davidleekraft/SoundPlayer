//
//  AHDetailViewController.h
//  AudioHomework
//
//  Created by David Kraft on 4/6/14.
//  Copyright (c) 2014 David Kraft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AHDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
