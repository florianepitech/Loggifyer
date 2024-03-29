
#include <iostream>
#include "PTP/Loggifyer.hpp"

int main()
{
    std::cout << __FILE__ << std::endl;
    std::cout << __LINE__ << std::endl;
    PTP_LOG_INFO("This is a Info message.%s", "s");
    PTP_LOG_MESSAGE("This is just a simple message.");
    PTP_LOG_OK("This is a Ok message to tell you that everything working properly.");
    PTP_LOG_WARNING("Be careful! you are looking good today. This was a Warning message.");
    PTP_LOG_ERROR("This is a Error log sample.");

    PTP_SET_LOG_LEVEL(ptp::log::LogLevel::Error);

    PTP_LOG_WARNING("This warning will not be displayed.");
    PTP_LOG_ERROR("Only Error logs are displayed. because the log level is %d.", int(PTP_GET_LOG_LEVEL));

    PTP_SET_LOG_LEVEL(ptp::log::LogLevel::Warning);

    PTP_LOG_INFO("This info will not be displayed.");
    PTP_LOG_MESSAGE("This Message log will not be displayed.");
    PTP_LOG_WARNING("This warning will be displayed.");
    PTP_LOG_ERROR("As you can see, only Error and Warning logs are displayed.");

    PTP_SET_LOG_LEVEL(ptp::log::LogLevel::Message);

    PTP_DISABLE_LOGS

    PTP_LOG_ERROR("This error will not be displayed.");

    PTP_ENABLE_LOGS

    PTP_LOG_OK("This Ok message will be displayed because logs are enabled.");

    PTP_LOG_COMPLEX_FORMATTING(true);

    PTP_LOG_INFO("This is a Info message with complex formatting.\nBecause complex formatting is enabled.");

    PTP_LOG_COMPLEX_FORMATTING(false);

    PTP_LOG_INFO("This is a Info message without complex formatting.\nBecause complex formatting is disabled.");

    return 0;
}
