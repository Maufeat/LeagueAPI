#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderContactResource.hpp>
namespace lol {
  Result<std::vector<RecofrienderContactResource>> GetRecofrienderV2Dismissed(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<RecofrienderContactResource>> {
        _client_.request("get", "/recofriender/v2/dismissed?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<RecofrienderContactResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}