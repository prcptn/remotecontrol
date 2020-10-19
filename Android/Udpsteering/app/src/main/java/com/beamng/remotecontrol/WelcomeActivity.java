package com.beamng.remotecontrol;

import android.Manifest;
import android.app.Activity;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.util.Log;
import android.view.View;

import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

public class WelcomeActivity extends Activity {

    public static int CamPermission;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_welcome);
    }

    public void onScanClick(View view) {

        if (ContextCompat.checkSelfPermission(WelcomeActivity.this,
                Manifest.permission.CAMERA) != PackageManager.PERMISSION_GRANTED) {
            Log.i("BeamNG", "No Camera Permission");

                ActivityCompat.requestPermissions(WelcomeActivity.this,
                    new String[]{Manifest.permission.CAMERA},
                    CamPermission);

            return;
        }
        Intent intent = new Intent(this, QRCodeScanner.class);
        startActivity(intent);
    }
}
