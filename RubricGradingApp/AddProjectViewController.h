//
//  AddProjectViewController.h
//  RubricGradingApp
//
//  Created by ghg on 11/18/15.
//  Copyright © 2015 Mohamed Hassan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CIS698.h"

@protocol AddProjectViewController;



@interface AddProjectViewController : UIViewController
@property (nonatomic, strong) CIS698 *currentCIS;
@property (nonatomic, weak) id <AddProjectViewController> delegate;

@property (weak, nonatomic) IBOutlet UITextField *projectNameField;
@property (weak, nonatomic) IBOutlet UITextField *studentNameField;
@property (weak, nonatomic) IBOutlet UITextField *studentEmailField;
@property (weak, nonatomic) IBOutlet UITextField *chairNameField;
@property (weak, nonatomic) IBOutlet UITextField *chairEmailField;
@property (weak, nonatomic) IBOutlet UITextField *faculty1NameField;
@property (weak, nonatomic) IBOutlet UITextField *faculty1EmailField;
@property (weak, nonatomic) IBOutlet UITextField *faculty2NameField;
@property (weak, nonatomic) IBOutlet UITextField *faculty2EmailField;
@property (weak, nonatomic) IBOutlet UITextField *faculty3NameField;
@property (weak, nonatomic) IBOutlet UITextField *faculty3EmailField;
@property (weak, nonatomic) IBOutlet UITextField *faculty4NameField;
@property (weak, nonatomic) IBOutlet UITextField *faculty4EmailField;


- (IBAction)save:(id)sender;

- (IBAction)cancel:(id)sender;
@end


@protocol AddProjectViewController

-(void)addProjectViewControllerSave;
-(void)addProjectViewControllerCancel: (CIS698 *)projectToDelete;


@end


