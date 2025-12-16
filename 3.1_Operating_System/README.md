# 🖥️ Operating Systems

This repository contains my study notes on **Operating Systems**.  
Each topic is written in both **Korean** and **English**, following the same bilingual structure as my Computer Architecture and Computer Networks notes.

---

## 📑 Table of Contents

### 1. OS Overview & Structure
- 📄 [Korean](./3.1-1_운영체제_개요.md) | 🌐 [English](./3.1-1_Overview_of_Operating_Sytems.md)  
- **What is an OS?**: Resource manager, extended machine, abstraction layer over hardware.  
- **OS Services**: Program execution, I/O operations, file system, communication, error handling, protection.  
- **System Structure**: Monolithic kernel, layered OS, microkernel, modular design.  
- **User vs Kernel Mode**: Privileged instructions, system calls, trap/interrupt handling.  
- **Processes, memory, files, devices** as core resource domains.  
- **Focus**: See the OS as a **control & abstraction layer** that sits between hardware and applications.

---

### 2. Processes & Threads
- 📄 [Korean](./3.1-2_프로세스와_스레드.md) | 🌐 [English](./3.1-2_Process_Threads.md)  
- **Process Concept**: More than “a running program” – code + data + open files + CPU context as an execution unit.  
- **PCB & Context**: Process Control Block, context (registers, PC, address space), and context switching.  
- **Process Address Space**: Code, data, BSS, heap, stack; static vs dynamic regions.  
- **Process States**: new, ready, running, blocked, suspended, terminated; why OS models state transitions.  
- **Process Hierarchy**: Parent/child, `fork()`–`exec()` pattern, process trees (init/systemd as root).  
- **Threads**: Threads as lightweight execution contexts inside a process, shared vs private resources.  
- **Multi-process vs Multi-thread**: Isolation & robustness vs resource efficiency & performance trade-off.  
- **Focus**: Understand **what an execution context is**, how OS tracks it, and why threads exist inside processes.

---

### 3. CPU Scheduling
- 📄 [Korean](./3.1-3_CPU_스케줄링.md) | 🌐 [English](./3.1-3_CPU_Scheduling.md)  
- **Goals**: CPU utilization, throughput, turnaround time, waiting time, response time (especially for interactive systems).  
- **CPU-bound vs I/O-bound**: Why differentiating them matters for global system performance.  
- **Scheduling Queues**: Ready queue, wait/blocked queues; how processes move between them.  
- **Preemptive vs Non-preemptive**: Trade-offs in responsiveness vs overhead.  
- **Algorithms**:  
  - FCFS: simple, but convoy effect.  
  - SJF / SRTF: shortest job/remaining time first, optimal avg waiting but risk of starvation.  
  - Round Robin: time quantum, fairness vs context-switch overhead.  
  - Priority Scheduling: static/dynamic priorities, starvation & aging.  
  - Multilevel Queue / Multilevel Feedback Queue: multiple ready queues, different policies per queue, realistic OS behavior.  
- **Focus**: How the OS decides **“who gets the CPU now”** under different workload and policy goals.

---

### 4. Synchronization
- 📄 [Korean](./3.1-4_동기화.md) | 🌐 [English](./3.1-4_Synchronization.md)  
- **Why Synchronization?**: Multiple processes/threads sharing data and resources can corrupt state without coordination.  
- **Two Main Goals**:  
  - Ordering constraints (“A must happen before B”).  
  - Mutual exclusion (only one at a time in a critical section).  
- **Key Concepts**: Shared resource, critical section, race condition, producer–consumer example.  
- **Mutex Locks**: Basic mutual exclusion, busy waiting (spinlocks) vs block/wakeup.  
- **Semaphores**: Counting & binary, `wait(P)` / `signal(V)`, resource counting + blocking semantics.  
- **Monitors**: Higher-level abstraction (shared state + methods + implicit mutual exclusion), condition variables, `wait`/`signal`.  
- **Condition Synchronization**: Ensuring not just mutual exclusion but also “wait until condition holds” (e.g., buffer not empty/full).  
- **Focus**: Reason about **correct concurrent programs**, not just fast ones – avoid races, deadlocks, missed signals.

---

### 5. Deadlocks
- 📄 [Korean](./3.1-5_교착_상태.md) | 🌐 [English](./3.1-5_Deadlock.md)  
- **Definition**: Set of processes each waiting for an event that only another process in the set can cause → no one can progress.  
- **Dining Philosophers**: Classic deadlock illustration using forks/chopsticks around a round table.  
- **Coffman Conditions** (all four must hold):  
  - Mutual exclusion  
  - Hold and wait  
  - No preemption  
  - Circular wait  
- **Strategies**:  
  - Prevention: Break at least one Coffman condition (but usually inefficient or unrealistic).  
  - Avoidance: Banker's algorithm, safe/unsafe states, safe sequence.  
  - Detection & Recovery: Allow deadlocks, then detect cycles and recover (preemption or process termination).  
- **Trade-offs**: Overhead vs simplicity vs resource utilization.  
- **Focus**: Recognize **when resource allocation can deadlock**, and what policy choices an OS has.

---

### 6. Memory Management & Virtual Memory
- 📄 [Korean](./3.1-6_메모리관리&가상메모리.md) | 🌐 [English](./3.1-6_Memory_Management&Virtual_Memory.md)  
- **Logical vs Physical Address**: Per-process logical view vs actual DRAM layout; address binding by MMU under OS control.  
- **Contiguous Allocation**: Fixed/variable partitions, first-fit, best-fit, worst-fit; external fragmentation and compaction.  
- **Virtual Memory**: Run processes larger than physical memory by loading only needed parts on demand.  
- **Paging**: Pages/frames, noncontiguous placement, page tables, multi-level page tables, shared pages.  
- **Address Translation**: page number + offset, PTEs, valid/protection/reference/dirty bits.  
- **TLB**: Page-table entry cache to avoid double memory accesses on each translation.  
- **Demand Paging & Page Faults**: Lazy loading of pages; trap, OS handler, page-in, restart.  
- **Page Replacement Algorithms**: FIFO, Optimal, LRU, LFU, Clock (second-chance); locality and practical approximations.  
- **Thrashing & Frame Allocation**: Working set, equal vs proportional allocation, working-set model, page-fault frequency control.  
- **Focus**: How the OS makes **limited physical memory look like a large, convenient memory** while controlling performance.

---

### 7. File Systems
- 📄 [Korean](./3.1-7_파일_시스템.md) | 🌐 [English](./3.1-7_File_Systems.md)  
- **Files & Directories**: Files as byte streams + metadata, directories as special files containing name → inode/ID mappings.  
- **File Metadata**: Type, size, ownership, permissions, timestamps, disk location.  
- **Paths**: Absolute vs relative paths; directory hierarchy and tree/DAG structure.  
- **Disk Preparation**: Partitioning (logical disk split) vs formatting (laying out file-system structures).  
- **Allocation Methods**:  
  - Contiguous allocation: fast random access, external fragmentation, hard to grow.  
  - Linked allocation: no external fragmentation, poor random access, pointer robustness issues.  
  - Indexed allocation: index block/inode listing all data blocks; good random access, overhead for index blocks.  
- **FAT**: Linked allocation implemented via a central File Allocation Table instead of per-block pointers.  
- **UNIX/Inode-based FS**: Inodes storing metadata + direct/indirect block pointers; directory entries mapping names to inode numbers.  
- **Journaling File Systems**: Write-ahead logging of metadata/data changes to maintain consistency across crashes; transactions, journal replay.  
- **Focus**: Understand how the OS **persists data safely and efficiently** on disks/SSDs, and what design trade-offs each file system makes.

---
