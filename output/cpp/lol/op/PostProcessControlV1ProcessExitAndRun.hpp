#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostProcessControlV1ProcessExitAndRun(const LeagueClient& _client, const std::string& executablePath, const std::string& workingDir, const std::vector<std::string>& args)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/process-control/v1/process/exit-and-run?" + SimpleWeb::QueryString::create(Args2Headers({ { "executablePath", to_string(executablePath) },
    { "workingDir", to_string(workingDir) } })), Args2String({ { "args", to_string(args) } }),
    Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/x-www-form-urlencoded"},  }) );
  }
}