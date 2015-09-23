//
//  IWXOGlobalExtensionService.h
//  WXOpenIMSDK
//
//  Created by huanglei on 15/3/10.
//  Copyright (c) 2015年 taobao. All rights reserved.
//

#import <Foundation/Foundation.h>





/*********************************************************************************
 *********************************************************************************
 *********************************************************************************
 *********************************************************************************
 
 * 注意点：所有WXO或者IWXO开头命名的类、接口、类型、常量等都已废弃，请使用YW或者IYW开头的定义 *
 
 *********************************************************************************
 *********************************************************************************
 *********************************************************************************
 *********************************************************************************
 ********************************************************************************/





#import "IYWExtensionService.h"

@protocol IWXOExtension;

@protocol IWXOExtensionService <IYWExtensionService>

/**
 *  获取某一个全局扩展
 */
- (id<IWXOExtension>)getExtensionByServiceName:(NSString *)aServiceName;

@end