//
//  Simple_TableViewController.h
//  Simple Table
//
//  Created by Ivan Gu on 14/05/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Simple_TableViewController : UIViewController
<UITableViewDataSource,UITableViewDelegate>
{
    NSArray *listData;
}
@property (nonatomic,retain) NSArray *listData;

@end
