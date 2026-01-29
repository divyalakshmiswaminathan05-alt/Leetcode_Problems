int distanceTraveled(int mainTank, int additionalTank) {
    int distance = 0;
    int used = 0;

    while (mainTank > 0) {
        mainTank--;
        distance += 10;
        used++;

        if (used == 5 && additionalTank > 0) {
            mainTank++;
            additionalTank--;
            used = 0;
        }
    }
    return distance;
}
