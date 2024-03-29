package com.foreign.Fuse.Android.Bindings;

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
import android.content.Intent;
import android.net.Uri;
import android.app.Activity;
import android.content.res.AssetFileDescriptor;
import android.content.res.AssetManager;

public class AndroidDeviceInterop
{
    static void debug_log(Object message)
    {
        android.util.Log.d("AfterLife", (message==null ? "null" : message.toString()));
    }

    public static Object LaunchIntent309(final String action,final String uri,final String packageName,final String className)
    {
        Intent pendingIntent = new Intent(action);
        pendingIntent.setData(Uri.parse(uri));
        
        if (packageName!=null && className!=null)
        	pendingIntent.setClassName(packageName, className);
        
        Activity a = com.fuse.Activity.getRootActivity();
        a.startActivity(pendingIntent);
        return pendingIntent;
    }
    
    public static Object MakeBufferInputStream1310(final Object buf)
    {
        return new com.fuse.android.ByteBufferInputStream((com.uno.UnoBackedByteBuffer)buf);
    }
    
    public static Object MakeMediaDataSource1311(final Object buf)
    {
        return new com.fuse.android.ByteBufferMediaDataSource((com.uno.UnoBackedByteBuffer)buf);
    }
    
    public static Object OpenAssetFileDescriptor312(final UnoObject bundle)
    {
        try
        {
        	String uri = ExternedBlockHost.callUno_Uno_IO_BundleFile_BundlePathGet313(bundle);
        	AssetManager am = com.fuse.Activity.getRootActivity().getAssets();
        	AssetFileDescriptor afd = am.openFd(uri);
        	return afd;
        }
        catch (Throwable e)
        {
        	com.fuse.AndroidInteropHelper.UncheckedThrow(e);
        	return null;
        }
    }
    
}
