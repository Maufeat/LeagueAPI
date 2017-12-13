#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/CollectionsLcdsMasteryBookPageDTO.hpp>
namespace lol {
  struct CollectionsLcdsMasteryBookDTO { 
    std::vector<CollectionsLcdsMasteryBookPageDTO> bookPages;
    std::string dateString;
    uint64_t summonerId; 
  };
  void to_json(json& j, const CollectionsLcdsMasteryBookDTO& v) {
  j["bookPages"] = v.bookPages; 
  j["dateString"] = v.dateString; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, CollectionsLcdsMasteryBookDTO& v) {
  v.bookPages = j.at("bookPages").get<std::vector<CollectionsLcdsMasteryBookPageDTO>>(); 
  v.dateString = j.at("dateString").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}