#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPersonalizedOffersOfferRequests.hpp"
#include "../def/LolPersonalizedOffersPurchaseResponse.hpp"
namespace lol {
  inline Result<LolPersonalizedOffersPurchaseResponse> PostLolPersonalizedOffersV1OffersPurchase(LeagueClient& _client, const LolPersonalizedOffersOfferRequests& offerRequests)
  {
    try {
      return Result<LolPersonalizedOffersPurchaseResponse> {
        _client.https.request("post", "/lol-personalized-offers/v1/offers/purchase?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(offerRequests).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPersonalizedOffersPurchaseResponse> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolPersonalizedOffersV1OffersPurchase(LeagueClient& _client, const LolPersonalizedOffersOfferRequests& offerRequests, std::function<void(LeagueClient&,const Result<LolPersonalizedOffersPurchaseResponse>&)> cb)
  {
    _client.httpsa.request("post", "/lol-personalized-offers/v1/offers/purchase?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(offerRequests).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolPersonalizedOffersPurchaseResponse> { response });
          else
            cb(_client,Result<LolPersonalizedOffersPurchaseResponse> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}