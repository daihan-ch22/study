import java.lang.annotation.Documented;
import java.lang.annotation.Target;
import static java.lang.annotation.ElementType.*;
//static import문을 이용하여 ElementType.TYPE 대신 TYPE과 같이 간단히 작성할 수 있습니다.


@Target({FIELD, TYPE, TYPE_USE})	// 적용대상이 FIELD, TYPE, TYPE_USE

@interface
MyAnnotation { }	// MyAnnotation을 정의

@MyAnnotation	// 적용대상 TYPE


class Main111 {
    @MyAnnotation	// 적용대상 FIELD
    int i;
}
