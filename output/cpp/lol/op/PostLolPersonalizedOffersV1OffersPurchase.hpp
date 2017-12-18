#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPersonalizedOffersPurchaseResponse.hpp>
#include <lol/def/LolPersonalizedOffersOfferRequests.hpp>
namespace lol {
  inline Result<LolPersonalizedOffersPurchaseResponse> PostLolPersonalizedOffersV1OffersPurchase(const LeagueClient& _client, const LolPersonalizedOffersOfferRequests& offerRequests)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPersonalizedOffersPurchaseResponse> {
        _client_.request("post", "/lol-personalized-offers/v1/offers/purchase?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(offerRequests).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPersonalizedOffersPurchaseResponse> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}