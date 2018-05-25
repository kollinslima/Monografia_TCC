public void clockCPU() {
    clockLock.lock();
    try {
        cpuClockCondition.signal();
    } finally {
        clockLock.unlock();
    }
}
