package com.foreign.Fuse.Controls.Native.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import java.util.HashMap;
import java.util.Map;

public class JavaMap
{
    static void debug_log(Object message)
    {
        android.util.Log.d("AfterLife", (message==null ? "null" : message.toString()));
    }

    public static boolean ContainsKey1160(final Object handle,final Object key)
    {
        @SuppressWarnings("unchecked")
        Map<Object, Object> map = (Map<Object, Object>)handle;
        return map.containsKey(key);
    }
    
    public static Object Create161()
    {
        return new HashMap<Object, Object>();
    }
    
    public static Object Get1162(final Object handle,final Object key)
    {
        @SuppressWarnings("unchecked")
        Map<Object, Object> map = (Map<Object, Object>)handle;
        return map.get(key);
    }
    
    public static void Put163(final Object handle,final Object key,final UnoObject value)
    {
        @SuppressWarnings("unchecked")
        Map<Object, Object> map = (Map<Object, Object>)handle;
        map.put(key, value);
    }
    
    public static void Remove1164(final Object handle,final Object key)
    {
        @SuppressWarnings("unchecked")
        Map<Object, Object> map = (Map<Object, Object>)handle;
        map.remove(key);
    }
    
}
