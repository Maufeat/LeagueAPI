#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderUrlResource.hpp"
namespace lol {
  template<typename T>
  inline Result<RecofrienderUrlResource> PostRecofrienderV1RegistrationsByNetwork(T& _client, const std::string& network)
  {
    try {
      return ToResult<RecofrienderUrlResource>(_client.https.request("post", "/recofriender/v1/registrations/"+to_string(network)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RecofrienderUrlResource>(e.code());
    }
  }
  template<typename T>
  inline void PostRecofrienderV1RegistrationsByNetwork(T& _client, const std::string& network, std::function<void(T&, const Result<RecofrienderUrlResource>&)> cb)
  {
    _client.httpsa.request("post", "/recofriender/v1/registrations/"+to_string(network)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RecofrienderUrlResource>(e));
            else
              cb(_client, ToResult<RecofrienderUrlResource>(response));
        });
  }
}