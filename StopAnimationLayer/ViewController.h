//
//  ViewController.h
//  StopAnimationLayer
//
//  Created by Yan Saraev on 11/7/13.
//  Copyright (c) 2013 Yan Saraev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
-(IBAction)pause:(id)sender;
-(IBAction)startAnimation:(id)sender;
-(IBAction)resume:(id)sender;


@property (weak) IBOutlet UILabel *label;

@end
