//
//  GuideTableRow.h
//  WatchDemoNavi
//
//  Created by 刘博 on 15/6/15.
//  Copyright (c) 2015年 AutoNavi. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@class AMapNaviGuide;

@interface GuideTableRow : NSObject

@property (nonatomic, assign) AMapNaviGuide *guideItem;

@end
