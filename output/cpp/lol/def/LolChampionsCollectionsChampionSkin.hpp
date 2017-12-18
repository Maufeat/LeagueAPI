#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampionsCollectionsOwnership.hpp>
#include <lol/def/LolChampionsCollectionsChampionSkinEmblem.hpp>
#include <lol/def/LolChampionsCollectionsChampionChroma.hpp>
namespace lol {
  struct LolChampionsCollectionsChampionSkin { 
    bool lastSelected;
    std::vector<LolChampionsCollectionsChampionChroma> chromas;
    bool isBase;
    std::optional<std::string> chromaPath;
    bool disabled;
    bool stillObtainable;
    std::string name;
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;
    std::optional<std::string> splashVideoPath;
    int32_t id;
    std::optional<std::string> skinType;
    std::optional<std::string> featuresText;
    std::string uncenteredSplashPath;
    LolChampionsCollectionsOwnership ownership;
    std::string splashPath;
    std::string rarityGemPath;
    std::string tilePath;
    int32_t championId;
    std::string cardPath; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionSkin& v) {
    j["lastSelected"] = v.lastSelected; 
    j["chromas"] = v.chromas; 
    j["isBase"] = v.isBase; 
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["disabled"] = v.disabled; 
    j["stillObtainable"] = v.stillObtainable; 
    j["name"] = v.name; 
    j["emblems"] = v.emblems; 
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["id"] = v.id; 
    if(v.skinType)
      j["skinType"] = *v.skinType;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath; 
    j["ownership"] = v.ownership; 
    j["splashPath"] = v.splashPath; 
    j["rarityGemPath"] = v.rarityGemPath; 
    j["tilePath"] = v.tilePath; 
    j["championId"] = v.championId; 
    j["cardPath"] = v.cardPath; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionSkin& v) {
    v.lastSelected = j.at("lastSelected").get<bool>(); 
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma>>(); 
    v.isBase = j.at("isBase").get<bool>(); 
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::optional<std::string>>(); 
    v.disabled = j.at("disabled").get<bool>(); 
    v.stillObtainable = j.at("stillObtainable").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>(); 
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::optional<std::string>>(); 
    v.id = j.at("id").get<int32_t>(); 
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::optional<std::string>>(); 
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>(); 
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>(); 
    v.splashPath = j.at("splashPath").get<std::string>(); 
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>(); 
    v.tilePath = j.at("tilePath").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.cardPath = j.at("cardPath").get<std::string>(); 
  }
}