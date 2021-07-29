// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_System_Diagnostics_2_H
#define WINRT_Windows_System_Diagnostics_2_H
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.System.Diagnostics.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Diagnostics
{
    struct __declspec(empty_bases) DiagnosticActionResult : winrt::Windows::System::Diagnostics::IDiagnosticActionResult
    {
        DiagnosticActionResult(std::nullptr_t) noexcept {}
        DiagnosticActionResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IDiagnosticActionResult(ptr, take_ownership_from_abi) {}
        DiagnosticActionResult(DiagnosticActionResult const&) noexcept = default;
        DiagnosticActionResult(DiagnosticActionResult&&) noexcept = default;
        DiagnosticActionResult& operator=(DiagnosticActionResult const&) & noexcept = default;
        DiagnosticActionResult& operator=(DiagnosticActionResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DiagnosticInvoker : winrt::Windows::System::Diagnostics::IDiagnosticInvoker,
        impl::require<DiagnosticInvoker, winrt::Windows::System::Diagnostics::IDiagnosticInvoker2>
    {
        DiagnosticInvoker(std::nullptr_t) noexcept {}
        DiagnosticInvoker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IDiagnosticInvoker(ptr, take_ownership_from_abi) {}
        DiagnosticInvoker(DiagnosticInvoker const&) noexcept = default;
        DiagnosticInvoker(DiagnosticInvoker&&) noexcept = default;
        DiagnosticInvoker& operator=(DiagnosticInvoker const&) & noexcept = default;
        DiagnosticInvoker& operator=(DiagnosticInvoker&&) & noexcept = default;
        static auto GetDefault();
        static auto GetForUser(winrt::Windows::System::User const& user);
        [[nodiscard]] static auto IsSupported();
    };
    struct __declspec(empty_bases) ProcessCpuUsage : winrt::Windows::System::Diagnostics::IProcessCpuUsage
    {
        ProcessCpuUsage(std::nullptr_t) noexcept {}
        ProcessCpuUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessCpuUsage(ptr, take_ownership_from_abi) {}
        ProcessCpuUsage(ProcessCpuUsage const&) noexcept = default;
        ProcessCpuUsage(ProcessCpuUsage&&) noexcept = default;
        ProcessCpuUsage& operator=(ProcessCpuUsage const&) & noexcept = default;
        ProcessCpuUsage& operator=(ProcessCpuUsage&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ProcessCpuUsageReport : winrt::Windows::System::Diagnostics::IProcessCpuUsageReport
    {
        ProcessCpuUsageReport(std::nullptr_t) noexcept {}
        ProcessCpuUsageReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessCpuUsageReport(ptr, take_ownership_from_abi) {}
        ProcessCpuUsageReport(ProcessCpuUsageReport const&) noexcept = default;
        ProcessCpuUsageReport(ProcessCpuUsageReport&&) noexcept = default;
        ProcessCpuUsageReport& operator=(ProcessCpuUsageReport const&) & noexcept = default;
        ProcessCpuUsageReport& operator=(ProcessCpuUsageReport&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ProcessDiagnosticInfo : winrt::Windows::System::Diagnostics::IProcessDiagnosticInfo,
        impl::require<ProcessDiagnosticInfo, winrt::Windows::System::Diagnostics::IProcessDiagnosticInfo2>
    {
        ProcessDiagnosticInfo(std::nullptr_t) noexcept {}
        ProcessDiagnosticInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessDiagnosticInfo(ptr, take_ownership_from_abi) {}
        ProcessDiagnosticInfo(ProcessDiagnosticInfo const&) noexcept = default;
        ProcessDiagnosticInfo(ProcessDiagnosticInfo&&) noexcept = default;
        ProcessDiagnosticInfo& operator=(ProcessDiagnosticInfo const&) & noexcept = default;
        ProcessDiagnosticInfo& operator=(ProcessDiagnosticInfo&&) & noexcept = default;
        static auto GetForProcesses();
        static auto GetForCurrentProcess();
        static auto TryGetForProcessId(uint32_t processId);
    };
    struct __declspec(empty_bases) ProcessDiskUsage : winrt::Windows::System::Diagnostics::IProcessDiskUsage
    {
        ProcessDiskUsage(std::nullptr_t) noexcept {}
        ProcessDiskUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessDiskUsage(ptr, take_ownership_from_abi) {}
        ProcessDiskUsage(ProcessDiskUsage const&) noexcept = default;
        ProcessDiskUsage(ProcessDiskUsage&&) noexcept = default;
        ProcessDiskUsage& operator=(ProcessDiskUsage const&) & noexcept = default;
        ProcessDiskUsage& operator=(ProcessDiskUsage&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ProcessDiskUsageReport : winrt::Windows::System::Diagnostics::IProcessDiskUsageReport
    {
        ProcessDiskUsageReport(std::nullptr_t) noexcept {}
        ProcessDiskUsageReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessDiskUsageReport(ptr, take_ownership_from_abi) {}
        ProcessDiskUsageReport(ProcessDiskUsageReport const&) noexcept = default;
        ProcessDiskUsageReport(ProcessDiskUsageReport&&) noexcept = default;
        ProcessDiskUsageReport& operator=(ProcessDiskUsageReport const&) & noexcept = default;
        ProcessDiskUsageReport& operator=(ProcessDiskUsageReport&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ProcessMemoryUsage : winrt::Windows::System::Diagnostics::IProcessMemoryUsage
    {
        ProcessMemoryUsage(std::nullptr_t) noexcept {}
        ProcessMemoryUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessMemoryUsage(ptr, take_ownership_from_abi) {}
        ProcessMemoryUsage(ProcessMemoryUsage const&) noexcept = default;
        ProcessMemoryUsage(ProcessMemoryUsage&&) noexcept = default;
        ProcessMemoryUsage& operator=(ProcessMemoryUsage const&) & noexcept = default;
        ProcessMemoryUsage& operator=(ProcessMemoryUsage&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ProcessMemoryUsageReport : winrt::Windows::System::Diagnostics::IProcessMemoryUsageReport
    {
        ProcessMemoryUsageReport(std::nullptr_t) noexcept {}
        ProcessMemoryUsageReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessMemoryUsageReport(ptr, take_ownership_from_abi) {}
        ProcessMemoryUsageReport(ProcessMemoryUsageReport const&) noexcept = default;
        ProcessMemoryUsageReport(ProcessMemoryUsageReport&&) noexcept = default;
        ProcessMemoryUsageReport& operator=(ProcessMemoryUsageReport const&) & noexcept = default;
        ProcessMemoryUsageReport& operator=(ProcessMemoryUsageReport&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SystemCpuUsage : winrt::Windows::System::Diagnostics::ISystemCpuUsage
    {
        SystemCpuUsage(std::nullptr_t) noexcept {}
        SystemCpuUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::ISystemCpuUsage(ptr, take_ownership_from_abi) {}
        SystemCpuUsage(SystemCpuUsage const&) noexcept = default;
        SystemCpuUsage(SystemCpuUsage&&) noexcept = default;
        SystemCpuUsage& operator=(SystemCpuUsage const&) & noexcept = default;
        SystemCpuUsage& operator=(SystemCpuUsage&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SystemCpuUsageReport : winrt::Windows::System::Diagnostics::ISystemCpuUsageReport
    {
        SystemCpuUsageReport(std::nullptr_t) noexcept {}
        SystemCpuUsageReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::ISystemCpuUsageReport(ptr, take_ownership_from_abi) {}
        SystemCpuUsageReport(SystemCpuUsageReport const&) noexcept = default;
        SystemCpuUsageReport(SystemCpuUsageReport&&) noexcept = default;
        SystemCpuUsageReport& operator=(SystemCpuUsageReport const&) & noexcept = default;
        SystemCpuUsageReport& operator=(SystemCpuUsageReport&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SystemDiagnosticInfo : winrt::Windows::System::Diagnostics::ISystemDiagnosticInfo
    {
        SystemDiagnosticInfo(std::nullptr_t) noexcept {}
        SystemDiagnosticInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::ISystemDiagnosticInfo(ptr, take_ownership_from_abi) {}
        SystemDiagnosticInfo(SystemDiagnosticInfo const&) noexcept = default;
        SystemDiagnosticInfo(SystemDiagnosticInfo&&) noexcept = default;
        SystemDiagnosticInfo& operator=(SystemDiagnosticInfo const&) & noexcept = default;
        SystemDiagnosticInfo& operator=(SystemDiagnosticInfo&&) & noexcept = default;
        static auto GetForCurrentSystem();
    };
    struct __declspec(empty_bases) SystemMemoryUsage : winrt::Windows::System::Diagnostics::ISystemMemoryUsage
    {
        SystemMemoryUsage(std::nullptr_t) noexcept {}
        SystemMemoryUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::ISystemMemoryUsage(ptr, take_ownership_from_abi) {}
        SystemMemoryUsage(SystemMemoryUsage const&) noexcept = default;
        SystemMemoryUsage(SystemMemoryUsage&&) noexcept = default;
        SystemMemoryUsage& operator=(SystemMemoryUsage const&) & noexcept = default;
        SystemMemoryUsage& operator=(SystemMemoryUsage&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SystemMemoryUsageReport : winrt::Windows::System::Diagnostics::ISystemMemoryUsageReport
    {
        SystemMemoryUsageReport(std::nullptr_t) noexcept {}
        SystemMemoryUsageReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::ISystemMemoryUsageReport(ptr, take_ownership_from_abi) {}
        SystemMemoryUsageReport(SystemMemoryUsageReport const&) noexcept = default;
        SystemMemoryUsageReport(SystemMemoryUsageReport&&) noexcept = default;
        SystemMemoryUsageReport& operator=(SystemMemoryUsageReport const&) & noexcept = default;
        SystemMemoryUsageReport& operator=(SystemMemoryUsageReport&&) & noexcept = default;
    };
}
#endif