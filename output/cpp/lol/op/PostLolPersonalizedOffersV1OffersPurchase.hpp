#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPersonalizedOffersPurchaseResponse.hpp>
#include <lol/def/LolPersonalizedOffersOfferRequests.hpp>
namespace lol {
  Result<LolPersonalizedOffersPurchaseResponse> PostLolPersonalizedOffersV1OffersPurchase(const LeagueClient& _client, const LolPersonalizedOffersOfferRequests& offerRequests)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-personalized-offers/v1/offers/purchase?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(offerRequests).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}