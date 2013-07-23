//
//  DGViewController.h
//  SocialSites
//
//  Created by user on 23/07/13.
//  Copyright (c) 2013 Gayathri. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DGViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIButton *twitteraction;
@property (strong, nonatomic) IBOutlet UIButton *facebookAction;
- (IBAction)twitterAction:(id)sender;
- (IBAction)faceBookAction:(id)sender;

@end
