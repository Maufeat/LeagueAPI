#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<void> PostProcessControlV1ProcessExitAndRun(const LeagueClient& _client, const std::string& executablePath, const std::string& workingDir, const std::vector<std::string>& args)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/process-control/v1/process/exit-and-run?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "executablePath", to_string(executablePath) },
           { "workingDir", to_string(workingDir) }, })), 
          Args2String({ 
           { "args", to_string(args) }, }),
          Args2Headers({
            {"content-type", "application/x-www-form-urlencoded"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}