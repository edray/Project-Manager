//
//  pmAppDelegate.h
//  ProjectManager
//
//  Created by Ray Burrell on 2/19/14.
//  Copyright (c) 2014 edraysoft. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface pmAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
