//
//  AppDelegate.h
//  FirstApp
//
//  Created by muttavarapu on 24/01/18.
//  Copyright © 2018 HappiestMinds. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

