//
//  ViewController.h
//  TP02db
//
//  Created by Guillaume Milon on 2/2/2017.
//  Copyright © 2017 gmilon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EditInfoViewController.h"

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, EditInfoViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tblPeople;


- (IBAction)addNewRecord:(id)sender;

@end
