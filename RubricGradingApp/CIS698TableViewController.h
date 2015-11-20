//
//  CIS698TableViewController.h
//  RubricGradingApp
//
//  Created by ghg on 11/18/15.
//  Copyright © 2015 Mohamed Hassan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "AddProjectViewController.h"
@interface CIS698TableViewController : UITableViewController <AddProjectViewController>

@property (nonatomic,strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) NSFetchedResultsController  *fetchedResultsController;
@end
