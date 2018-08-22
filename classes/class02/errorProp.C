{
TF1 *f = new TF1("f", "0.2*pow(x, 3.5)", 0, 10);
f->SetLineWidth(3);
f->Draw();


TLine *v1 = new TLine(4.5, 0, 4.5, f->Eval(4.5));
//v1->SetLineWidth(2);
v1->SetLineColor(kBlue);
v1->Draw();
TLine *v2 = new TLine(5, 0, 5, f->Eval(5));
v2->SetLineWidth(2);
v2->SetLineColor(kBlue);
v2->Draw();
TLine *v3 = new TLine(5.5, 0, 5.5, f->Eval(5.5));
//v3->SetLineWidth(2);
v3->SetLineColor(kBlue);
v3->Draw();

TLine *h1 = new TLine(0, f->Eval(4.5), 4.5, f->Eval(4.5));
//h1->SetLineWidth(2);
h1->SetLineColor(kBlue);
h1->Draw();
TLine *h2 = new TLine(0, f->Eval(5), 5, f->Eval(5));
h2->SetLineWidth(2);
h2->SetLineColor(kBlue);
h2->Draw();
TLine *h3 = new TLine(0, f->Eval(5.5), 5.5, f->Eval(5.5));
//h3->SetLineWidth(2);
h3->SetLineColor(kBlue);
h3->Draw();


TLine *vv1 = new TLine(7.5, 0, 7.5, f->Eval(7.5));
//vv1->SetLineWidth(2);
vv1->SetLineColor(kGreen+3);
vv1->Draw();
TLine *vv2 = new TLine(8, 0, 8, f->Eval(8));
vv2->SetLineWidth(2);
vv2->SetLineColor(kGreen+3);
vv2->Draw();
TLine *vv3 = new TLine(8.5, 0, 8.5, f->Eval(8.5));
//vv3->SetLineWidth(2);
vv3->SetLineColor(kGreen+3);
vv3->Draw();

TLine *hh1 = new TLine(0, f->Eval(7.5), 7.5, f->Eval(7.5));
//hh1->SetLineWidth(2);
hh1->SetLineColor(kGreen+3);
hh1->Draw();
TLine *hh2 = new TLine(0, f->Eval(8), 8, f->Eval(8));
hh2->SetLineWidth(2);
hh2->SetLineColor(kGreen+3);
hh2->Draw();
TLine *hh3 = new TLine(0, f->Eval(8.5), 8.5, f->Eval(8.5));
//hh3->SetLineWidth(2);
hh3->SetLineColor(kGreen+3);
hh3->Draw();


}
