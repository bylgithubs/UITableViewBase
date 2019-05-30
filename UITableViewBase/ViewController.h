//
//  ViewController.h
//  UITableViewBase
//
//  Created by Civet on 2019/5/24.
//  Copyright © 2019年 PandaTest. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
<
//实现数据视图的普通协议
//数据视图的普通事件处理
UITableViewDelegate,
//实现数据视图的代理协议
//处理数据视图的数据代理
UITableViewDataSource
>

//定义一个数据视图对象
//数据视图用来显示大量相同格式的信息的视图
//例如：电话通讯录，QQ好友等
@property (nonatomic,strong) UITableView *tableView;


@end

