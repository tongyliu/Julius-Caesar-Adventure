//
//  ViewController.h
//  Julius Caesar Adventure
//
//  Created by Tong on 5/13/14.
//  Copyright (c) 2014 Tong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIWebViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UIWebView *webView;

@end
