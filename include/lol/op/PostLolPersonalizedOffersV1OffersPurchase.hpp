#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPersonalizedOffersOfferRequests.hpp"
#include "../def/LolPersonalizedOffersPurchaseResponse.hpp"
namespace lol {
  inline Result<LolPersonalizedOffersPurchaseResponse> PostLolPersonalizedOffersV1OffersPurchase(LeagueClient& _client, const LolPersonalizedOffersOfferRequests& offerRequests)
  {
    try {
      return ToResult<LolPersonalizedOffersPurchaseResponse>(_client.https.request("post", "/lol-personalized-offers/v1/offers/purchase?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(offerRequests).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPersonalizedOffersPurchaseResponse>(e.code());
    }
  }
  inline void PostLolPersonalizedOffersV1OffersPurchase(LeagueClient& _client, const LolPersonalizedOffersOfferRequests& offerRequests, std::function<void(LeagueClient&, const Result<LolPersonalizedOffersPurchaseResponse>&)> cb)
  {
    _client.httpsa.request("post", "/lol-personalized-offers/v1/offers/purchase?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(offerRequests).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPersonalizedOffersPurchaseResponse>(e));
            else
              cb(_client, ToResult<LolPersonalizedOffersPurchaseResponse>(response));
        });
  }
}