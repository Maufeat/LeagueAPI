#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPersonalizedOffersUIOffer.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolPersonalizedOffersUIOffer>> PostLolPersonalizedOffersV1OffersByIdReveal(T& _client, const std::string& id)
  {
    try {
      return ToResult<std::vector<LolPersonalizedOffersUIOffer>>(_client.https.request("post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/reveal?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolPersonalizedOffersUIOffer>>(e.code());
    }
  }
  template<typename T>
  inline void PostLolPersonalizedOffersV1OffersByIdReveal(T& _client, const std::string& id, std::function<void(T&, const Result<std::vector<LolPersonalizedOffersUIOffer>>&)> cb)
  {
    _client.httpsa.request("post", "/lol-personalized-offers/v1/offers/"+to_string(id)+"/reveal?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolPersonalizedOffersUIOffer>>(e));
            else
              cb(_client, ToResult<std::vector<LolPersonalizedOffersUIOffer>>(response));
        });
  }
}