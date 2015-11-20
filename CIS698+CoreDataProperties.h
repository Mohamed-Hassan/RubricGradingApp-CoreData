//
//  CIS698+CoreDataProperties.h
//  RubricGradingApp
//
//  Created by ghg on 11/18/15.
//  Copyright © 2015 Mohamed Hassan. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "CIS698.h"

NS_ASSUME_NONNULL_BEGIN

@interface CIS698 (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *projectName;
@property (nullable, nonatomic, retain) NSString *studentName;
@property (nullable, nonatomic, retain) NSString *studentEmail;
@property (nullable, nonatomic, retain) NSString *faculty1Name;
@property (nullable, nonatomic, retain) NSString *faculty1Email;
@property (nullable, nonatomic, retain) NSString *faculty2Name;
@property (nullable, nonatomic, retain) NSString *faculty2Email;
@property (nullable, nonatomic, retain) NSString *faculty3Name;
@property (nullable, nonatomic, retain) NSString *faculty3Email;
@property (nullable, nonatomic, retain) NSString *faculty4Name;
@property (nullable, nonatomic, retain) NSString *faculty4Email;
@property (nullable, nonatomic, retain) NSString *facultyChairName;
@property (nullable, nonatomic, retain) NSString *facultyChairEmail;

@end

NS_ASSUME_NONNULL_END
