#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderLinkResource.hpp"
namespace lol {
  inline Result<RecofrienderLinkResource> GetRecofrienderV1RegistrationsByNetwork(LeagueClient& _client, const std::string& network)
  {
    try {
      return ToResult<RecofrienderLinkResource>(_client.https.request("get", "/recofriender/v1/registrations/"+to_string(network)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RecofrienderLinkResource>(e.code());
    }
  }
  inline void GetRecofrienderV1RegistrationsByNetwork(LeagueClient& _client, const std::string& network, std::function<void(LeagueClient&, const Result<RecofrienderLinkResource>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v1/registrations/"+to_string(network)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RecofrienderLinkResource>(e));
            else
              cb(_client, ToResult<RecofrienderLinkResource>(response));
        });
  }
}