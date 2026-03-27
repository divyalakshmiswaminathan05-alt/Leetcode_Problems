int findDelayedArrivalTime(int at, int dt) {
    int ans=at+dt;
    if(ans>=24)
        return ans-24;
    else
        return ans;
}