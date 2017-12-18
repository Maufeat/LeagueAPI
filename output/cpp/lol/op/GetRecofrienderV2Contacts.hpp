#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderContactResource.hpp"
namespace lol {
  inline Result<std::vector<RecofrienderContactResource>> GetRecofrienderV2Contacts(LeagueClient& _client)
  {
    try {
      return Result<std::vector<RecofrienderContactResource>> {
        _client.https.request("get", "/recofriender/v2/contacts?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<RecofrienderContactResource>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetRecofrienderV2Contacts(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<RecofrienderContactResource>>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v2/contacts?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<RecofrienderContactResource>> { response });
          else
            cb(_client,Result<std::vector<RecofrienderContactResource>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}