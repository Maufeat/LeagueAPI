#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPersonalizedOffersOfferRequest.hpp>
namespace lol {
  struct LolPersonalizedOffersOfferRequests { 
    std::vector<LolPersonalizedOffersOfferRequest> offers; 
  };
  void to_json(json& j, const LolPersonalizedOffersOfferRequests& v) {
    j["offers"] = v.offers; 
  }
  void from_json(const json& j, LolPersonalizedOffersOfferRequests& v) {
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOfferRequest>>(); 
  }
}