//
//  EditInfoViewController.h
//  TP02db
//
//  Created by Guillaume Milon on 2/2/2017.
//  Copyright © 2017 gmilon. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EditInfoViewControllerDelegate

-(void)editingInfoWasFinished;

@end


@interface EditInfoViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic, strong) id<EditInfoViewControllerDelegate> delegate;

@property (weak, nonatomic) IBOutlet UITextField *txtFirstname;

@property (weak, nonatomic) IBOutlet UITextField *txtLastname;

@property (weak, nonatomic) IBOutlet UITextField *txtAge;

@property (nonatomic) int recordIDToEdit;


- (IBAction)saveInfo:(id)sender;

@end
