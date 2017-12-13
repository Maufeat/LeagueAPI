#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPersonalizedOffersOffer.hpp>
namespace lol {
  struct LolPersonalizedOffersOffers { 
    std::vector<LolPersonalizedOffersOffer> offers; 
  };
  void to_json(json& j, const LolPersonalizedOffersOffers& v) {
    j["offers"] = v.offers; 
  }
  void from_json(const json& j, LolPersonalizedOffersOffers& v) {
    v.offers = j.at("offers").get<std::vector<LolPersonalizedOffersOffer>>(); 
  }
}