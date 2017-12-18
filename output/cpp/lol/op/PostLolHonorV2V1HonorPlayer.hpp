#pragma once
#include "../base_op.hpp" 
#include "../def/LolHonorV2ApiHonorPlayerServerRequest.hpp"
namespace lol {
  inline Result<std::string> PostLolHonorV2V1HonorPlayer(const LeagueClient& _client, const LolHonorV2ApiHonorPlayerServerRequest& honorPlayerRequest)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::string> {
        _client_.request("post", "/lol-honor-v2/v1/honor-player?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(honorPlayerRequest).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::string> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}