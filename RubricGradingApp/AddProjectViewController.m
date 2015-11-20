//
//  AddProjectViewController.m
//  RubricGradingApp
//
//  Created by ghg on 11/18/15.
//  Copyright © 2015 Mohamed Hassan. All rights reserved.
//

#import "AddProjectViewController.h"

@interface AddProjectViewController ()

@end

@implementation AddProjectViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    _projectNameField.text = [self.currentCIS projectName];
    _studentNameField.text = [self.currentCIS studentName];
    _studentEmailField.text = [self.currentCIS studentEmail];
    _chairNameField.text = [self.currentCIS facultyChairName];
    _chairEmailField.text = [self.currentCIS facultyChairEmail];
    _faculty1NameField.text = [self.currentCIS faculty1Name];
    _faculty1EmailField.text = [self.currentCIS faculty1Email];
    _faculty1NameField.text = [self.currentCIS faculty1Name];
    _faculty1EmailField.text = [self.currentCIS faculty1Email];
    _faculty2NameField.text = [self.currentCIS faculty2Name];
    _faculty2EmailField.text = [self.currentCIS faculty2Email];
    _faculty3NameField.text = [self.currentCIS faculty3Name];
    _faculty3EmailField.text = [self.currentCIS faculty3Email];
    _faculty4NameField.text = [self.currentCIS faculty4Name];
    _faculty4EmailField.text = [self.currentCIS faculty4Email];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)save:(id)sender {
    [self.currentCIS setProjectName:_projectNameField.text];
    
    
}

- (IBAction)cancel:(id)sender {
    
    
}
@end
