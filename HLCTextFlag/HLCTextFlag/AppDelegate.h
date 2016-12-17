//
//  AppDelegate.h
//  HLCTextFlag
//
//  Created by huanglch on 2016/12/17.
//  Copyright © 2016年 huanglch. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

