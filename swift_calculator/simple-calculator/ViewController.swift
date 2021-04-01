//
//  ViewController.swift
//  simple-calculator
//
//  Created by Sajjad Aemmi on 10/13/1399 AP.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var tb: UILabel!
    @IBOutlet weak var btn_1: UIButton!
    @IBOutlet weak var btn_2: UIButton!
    @IBOutlet weak var btn_3: UIButton!
    @IBOutlet weak var btn_sum: UIButton!
    @IBOutlet weak var btn_equal: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        tb.text = "0"
    }
    
    var last_operator = ""
    var number1 : Int! = 0
    var number2 : Int! = 0
    var result : Int! = 0
    
    @IBAction func btn_1(_ sender: Any) {
        tb.text! += "1"
    }
    @IBAction func btn_2(_ sender: Any) {
    }
    @IBAction func btn_3(_ sender: Any) {
    }
    @IBAction func btn_sum(_ sender: Any) {
        number1 = Int(tb.text!)
        tb.text = "0"
        last_operator = "+"
    }
    @IBAction func btn_equal(_ sender: Any) {
        number2 = Int(tb.text!)
        
        if(last_operator == "+")
        {
            result = number1 + number2
        }
        tb.text = String(result)
    }
    
}

