//
//  DetailViewController.h
//  Sample
//
//  Created by Younes Nouri Soltan on 18/02/2013.
//  Copyright (c) 2013 Younes Nouri Soltan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
