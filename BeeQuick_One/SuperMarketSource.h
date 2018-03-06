

#import <Foundation/Foundation.h>
typedef void(^CompleteBlock)(id data,NSError *error);

@class SuperMarketData;
@class ProductCategory;
@class Products;
@class Goods;

@interface SuperMarketSource : NSObject

@property (nonatomic, copy) NSString *code;

@property (nonatomic, copy) NSString *msg;

@property (nonatomic,strong)SuperMarketData *data;

+ (void)loadSupermarketData:(CompleteBlock)complete;
@end


@interface SuperMarketData:NSObject

@property (nonatomic,strong)NSArray<ProductCategory *> *categories;

@property (nonatomic,strong)id products;

@end


@interface ProductCategory:NSObject

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *sort;
@property (nonatomic, strong) NSArray *products;

@end
