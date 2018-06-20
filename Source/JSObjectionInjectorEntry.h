#import <Foundation/Foundation.h>
#import "JSObjectionEntry.h"

typedef id (^JSObjectionInjectorEntryConstructorBlock)(void);

@protocol JSObjectionInjectorEntrySelectors

@optional
+ (id)objectionInitializer;

@end

@interface JSObjectionInjectorEntry : JSObjectionEntry

@property (nonatomic, readonly) Class classEntry;
@property (nonatomic, readonly) JSObjectionInjectorEntryConstructorBlock constructorBlock;

- (instancetype)initWithClass:(Class)theClass lifeCycle:(JSObjectionScope)theLifeCycle;
- (instancetype)initWithClass:(Class)theClass lifeCycle:(JSObjectionScope)theLifeCycle constructorBlock:(JSObjectionInjectorEntryConstructorBlock)constructorBlock;
+ (instancetype)entryWithClass:(Class)theClass scope:(JSObjectionScope)theLifeCycle;
+ (instancetype)entryWithClass:(Class)theClass scope:(JSObjectionScope)theLifeCycle constructorBlock:(JSObjectionInjectorEntryConstructorBlock)constructorBlock;

@end
