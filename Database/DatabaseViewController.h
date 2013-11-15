//
//  DatabaseViewController.h
//  Database
//
//  Created by THIAGO PEREIRA on 2/26/13.
//  Copyright (c) 2013 THIAGO PEREIRA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "sqlite3.h"

@interface DatabaseViewController : UIViewController

@property(strong,nonatomic) NSString *databasePath;
@property(nonatomic) sqlite3 *contactDB;

@property (strong, nonatomic) IBOutlet UITextField *nameField;
@property (strong, nonatomic) IBOutlet UITextField *addressField;
@property (strong, nonatomic) IBOutlet UITextField *phoneField;
@property (strong, nonatomic) IBOutlet UILabel *statuslabel;

- (IBAction)saveData:(id)sender;
- (IBAction)findContact:(id)sender;

-(void)checkDatabase;

@end
