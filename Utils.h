//
//  Utils.h
//  Intuit
//
//  Created by Глеб Тарасов on 11.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

typedef void(^BasicBlock)(void);
typedef void(^ErrorBlock)(NSError *error);

#import "UIViewController+Utils.h"
#import "UIView+Utils.h"
#import "UIView+Fading.h"
#import "UIWebView+Utils.h"
#import "UILabel+Utils.h"
#import "UITableView+Utils.h"
#import "UITableViewCell+Utils.h"
#import "UIDevice+IdentifierAddition.h"
#import "UIImage+Utils.h"
#import "UIApplication+Utils.h"
#import "NSObject+Utils.h"
#import "NSString+Utils.h"
#import "NSMutableArray+Utils.h"
#import "NSArray+Utils.h"
#import "NSSet+Utils.h"

#import "StringUtils.h"

#import "BlockAlertView.h"
#import "BlockTapGestureRecognizer.h"
#import "BlockSwipeGestureRecognizer.h"
#import "AlignedLabel.h"
#import "DownloadProgress.h"
#import "FilesDownloader.h"
#import "DownloadPortion.h"


#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)
