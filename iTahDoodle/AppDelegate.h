//
//  AppDelegate.h
//  iTahDoodle
//
//  Created by Jim Toepel on 4/12/15.
//  Copyright (c) 2015 FunderDevelopment. All rights reserved.
//

#import <UIKit/UIKit.h>

// Declare a helper function that will get a path to a location on disk where the to-Do list can be saved
NSString *DocPath(void);


@interface AppDelegate : UIResponder <UIApplicationDelegate, UITableViewDataSource>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic) UITableView *taskTable;
@property (nonatomic) UITextField *taskField;
@property (nonatomic) UIButton *insertButton;

@property (nonatomic) NSMutableArray *tasks;

-(void)addTask:(id)sender;


@end

